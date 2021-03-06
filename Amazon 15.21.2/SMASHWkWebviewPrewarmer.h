//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WKWebView;

@interface SMASHWkWebviewPrewarmer : NSObject
{
    _Bool _shouldUsePrewarmedWebview;
    WKWebView *_prewarmedWebView;
}

+ (id)instantiateWebviewWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
+ (id)sharedPrewarmer;
+ (void)RESET_SHARED_PREWARMER_TEST_ONLY;
@property(nonatomic) _Bool shouldUsePrewarmedWebview; // @synthesize shouldUsePrewarmedWebview=_shouldUsePrewarmedWebview;
@property(retain, nonatomic) WKWebView *prewarmedWebView; // @synthesize prewarmedWebView=_prewarmedWebView;
- (void).cxx_destruct;
- (id)getPrewarmedOrCreateNewWebviewForFrame:(struct CGRect)arg1 allowsInlineMediaPlayback:(_Bool)arg2 mediaPlaybackRequiresUserAction:(_Bool)arg3;
- (id)_createNewWebViewCommon:(struct CGRect)arg1 allowsInlineMediaPlayback:(_Bool)arg2 mediaPlaybackRequiresUserAction:(_Bool)arg3;
- (void)prewarmWebviewProcessWithoutWebviewReuse;
- (void)prewarmWebviewProcessWithWebviewReuse;
- (id)initPrivate;
- (id)getProcessPool;

@end

