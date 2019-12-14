#pragma once

class WebviewObserver : Core::Observer<WebviewObserver, Core::SingleThreadedLock> {

public:
    virtual ~WebviewObserver();
    virtual void onLoadingBegin(void);
    virtual void onLoadingEnd(void);
    virtual void onError(WebviewError const&);
    virtual void onDownloadBegin(WebviewDownloadInfo const&);
    virtual void onDownloadUpdate(WebviewDownloadInfo const&);
    virtual void onDownloadComplete(WebviewDownloadInfo const&);
    virtual void onDownloadCanceled(WebviewDownloadInfo const&);
    virtual void onMessageRecieved(std::string const&);

    void WebviewObserver(void);
};
