;; vim: set expandtab ai textwidth=80:
                ; �����
                .MCALL  .BINIT,.BEXIT

                ; ������� ������
                .MCALL  .BTSET
                .MCALL  .BSTR,.BPRIN

                ; ������� ����������
                .MCALL  .BTTIN

                ; ���������� �������
                .MCALL  .BPAGE,.BMEM,.BJSR,.BWORK
                .MCALL  .BJMP

