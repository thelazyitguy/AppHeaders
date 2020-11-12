//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NlsErrorReporter, NlsLogger, NlsWebViewHolder;

@interface NlsJSBridge : NSObject
{
    NlsLogger *_logger;
    NlsErrorReporter *_errorReporter;
    NlsWebViewHolder *_webViewHolder;
}

@property(retain, nonatomic) NlsWebViewHolder *webViewHolder; // @synthesize webViewHolder=_webViewHolder;
@property(nonatomic) __weak NlsErrorReporter *errorReporter; // @synthesize errorReporter=_errorReporter;
@property(nonatomic) __weak NlsLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)name;
- (id)commandWithArgument:(id)arg1 forFunctionWithName:(id)arg2;
- (id)prepareArgument:(id)arg1;
- (id)prepareArguments:(id)arg1;
- (void)prepareEnvironmentWithHTMLPage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithWebViewHolder:(id)arg1 logger:(id)arg2 andErrorReporter:(id)arg3;

@end
