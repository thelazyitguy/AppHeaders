//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class HTTPRetryRequestTask;

@interface HTTPErrorAlertController : UIAlertController
{
    _Bool _cancellable;
    _Bool _throttleable;
    double _throttleInterval;
    HTTPRetryRequestTask *_retryTask;
    CDUnknownBlockType _overridingRetryTask;
    CDUnknownBlockType _cancelTask;
}

+ (id)alertWithError:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelTask; // @synthesize cancelTask=_cancelTask;
@property(copy, nonatomic) CDUnknownBlockType overridingRetryTask; // @synthesize overridingRetryTask=_overridingRetryTask;
@property(retain, nonatomic) HTTPRetryRequestTask *retryTask; // @synthesize retryTask=_retryTask;
@property(nonatomic) double throttleInterval; // @synthesize throttleInterval=_throttleInterval;
@property(nonatomic) _Bool throttleable; // @synthesize throttleable=_throttleable;
@property(nonatomic) _Bool cancellable; // @synthesize cancellable=_cancellable;
- (void)presentWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

