#include <QStringList>//��������QString��QStringList�Ķ��塣
#include <QDir>//��QDir�ṩ�˶�Ŀ¼�ṹ��Ŀ¼�ķ��ʷ�����
#include "ui_findfileform.h"

class CFindFileForm :	public QWidget,
						public Ui_FindFileForm//��CFindFileForm�Թ��з�ʽ�̳���Qwiget��Ui_FindFileForm��
{
	Q_OBJECT
public:
	CFindFileForm(QWidget* = 0);
	
private://�����˱���ĳ�Ա�����ͳ�Ա������
	QStringList findFiles(const QDir&, const QString&, const QString&);//ʵ���ļ��Ĳ��Ҳ����ط����������ļ��б�
	void showFiles(const QDir&, const QStringList&);
	void tranvFolder(const QDir&, const QString& , const QString );//�ݹ麯����ʵ�ֶ��ļ��ĵݹ���ҡ�
	bool m_bStoped;//��¼�û��Ƿ񵥻��ˡ�ֹͣ����ť�������Ϊtrue��
	bool	m_bSubfolder;//��¼�û��Ƿ���Ҫ�������ļ����е��ļ��������Ҫλtrue��
	bool	m_bSensitive;//���ڲ��Ұ����ض��ı���Ϣ���ļ�ʱ���Ƿ������ı���Ϣ�Ĵ�Сд���������λtrue��
	int m_nCount;
	 
private slots:
     void 	browse();//�òۺ�����Ӧ�û��ĵ��������...��������
     void 	find();//��Ӧ�û����������ҡ�������
	 void 	stop();//��Ӧ�û��ġ�ֹͣ���ҡ�������
	 void	doTxtChange(const QString&);//��Ӧ�û������롰�����ı���������
};
#endif




