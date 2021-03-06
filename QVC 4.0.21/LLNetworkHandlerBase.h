//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LLLogging, LLURLConnection;
@protocol LLLocalyticsBaseDelegate, LLUploadCompletedDelegate, OS_dispatch_queue;

@interface LLNetworkHandlerBase : NSObject
{
    id <LLUploadCompletedDelegate> _completionDelegate;
    LLLogging *_logger;
    id <LLLocalyticsBaseDelegate> _localyticsDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    LLURLConnection *_currentConnection;
}

+ (id)timeStamp;
- (void).cxx_destruct;
@property(retain, nonatomic) LLURLConnection *currentConnection; // @synthesize currentConnection=_currentConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <LLLocalyticsBaseDelegate> localyticsDelegate; // @synthesize localyticsDelegate=_localyticsDelegate;
@property(retain, nonatomic) LLLogging *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <LLUploadCompletedDelegate> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
- (void)executeNetworkConnection:(id)arg1 withUploadRowCount:(id)arg2 andCreationBlock:(CDUnknownBlockType)arg3;
- (void)asyncURLRequest:(id)arg1 andCustomerId:(id)arg2;
- (void)asyncURLDataUploadTask:(id)arg1 withData:(id)arg2 withUploadedRowCount:(id)arg3 andCustomerId:(id)arg4;
- (id)createRequestWithURL:(id)arg1 installId:(id)arg2 libraryVersion:(id)arg3 customerId:(id)arg4;
- (void)cancelTransfer;
- (id)initWithQueue:(id)arg1 logger:(id)arg2 andLocalyticsDelegate:(id)arg3;

@end

