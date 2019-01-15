/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerCustomExampleAppMainWindow_h
#define __qSlicerCustomExampleAppMainWindow_h

// SlicerCustomExample includes
#include "qSlicerCustomExampleAppExport.h"
class qSlicerCustomExampleAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_SLICERCUSTOMEXAMPLE_APP_EXPORT qSlicerCustomExampleAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qSlicerCustomExampleAppMainWindow(QWidget *parent=0);
  virtual ~qSlicerCustomExampleAppMainWindow();

public slots:
  void on_HelpAboutSlicerCustomExampleAppAction_triggered();

protected:
  qSlicerCustomExampleAppMainWindow(qSlicerCustomExampleAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qSlicerCustomExampleAppMainWindow);
  Q_DISABLE_COPY(qSlicerCustomExampleAppMainWindow);
};

#endif
