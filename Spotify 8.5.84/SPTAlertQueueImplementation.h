//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAlertInterface-Protocol.h"
#import "SPTAlertTokenObserver-Protocol.h"

@class NSArray, NSMutableArray, NSString, SPTAlertQueuePresenterImplementation, SPTAlertTokenImplementation, SPTPopupPermissions;

@interface SPTAlertQueueImplementation : NSObject <SPTAlertTokenObserver, SPTAlertInterface>
{
    SPTPopupPermissions *_permissions;
    SPTAlertQueuePresenterImplementation *_presenter;
    SPTAlertTokenImplementation *_currentOperationToken;
    NSMutableArray *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SPTAlertTokenImplementation *currentOperationToken; // @synthesize currentOperationToken=_currentOperationToken;
@property(retain, nonatomic) SPTAlertQueuePresenterImplementation *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) SPTPopupPermissions *permissions; // @synthesize permissions=_permissions;
- (void)performOperationForToken:(id)arg1;
- (void)serviceQueue;
- (void)alertOperationForTokenWasCancelled:(id)arg1;
- (void)alertOperationForTokenDidComplete:(id)arg1;
- (id)queueOperation:(id)arg1;
- (id)queueAlert:(id)arg1;
- (id)alertActionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)alertWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
@property(readonly, nonatomic) NSArray *queuedAlerts;
- (void)dealloc;
- (id)initWithPermissions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
