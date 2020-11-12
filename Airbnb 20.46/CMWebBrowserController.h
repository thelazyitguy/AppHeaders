//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol CardinalSessionConfigType;

__attribute__((visibility("hidden")))
@interface CMWebBrowserController : NSObject
{
    id <CardinalSessionConfigType> _sessionConfig;
    NSOperationQueue *_webBrowserQueue;
}

+ (id)browserControllerWithConfig:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *webBrowserQueue; // @synthesize webBrowserQueue=_webBrowserQueue;
@property(retain, nonatomic) id <CardinalSessionConfigType> sessionConfig; // @synthesize sessionConfig=_sessionConfig;
- (void).cxx_destruct;
- (void)sendRequestInBackgroundWithData:(id)arg1 to:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createQueueWithName:(id)arg1;
- (void)sendAccountNumber:(id)arg1 to:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithSessionConfig:(id)arg1;

@end
