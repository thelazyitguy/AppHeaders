//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/STKProductPresenterDisplayDelegate-Protocol.h>
#import <Funny/STKProductTaskDataSource-Protocol.h>
#import <Funny/STKProviderTaskDelegate-Protocol.h>
#import <Funny/STKValidatorTaskDelegate-Protocol.h>

@class NSDictionary, NSOperationQueue, NSString;
@protocol STKProductControllerDelegate, STKProductPresenter;

@interface STKProductController : NSObject <STKProductTaskDataSource, STKProviderTaskDelegate, STKValidatorTaskDelegate, STKProductPresenterDisplayDelegate>
{
    _Bool _isPresented;
    id <STKProductControllerDelegate> _delegate;
    NSOperationQueue *_taskQueue;
    id <STKProductPresenter> _presenter;
    NSDictionary *_urlMap;
}

@property(retain, nonatomic) NSDictionary *urlMap; // @synthesize urlMap=_urlMap;
@property(retain, nonatomic) id <STKProductPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) NSOperationQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(nonatomic) __weak id <STKProductControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presenter:(id)arg1 failToPresentContent:(id)arg2 withError:(id)arg3;
- (void)presenter:(id)arg1 didDismissContent:(id)arg2;
- (void)presenterWillPresent:(id)arg1 willPresentContent:(id)arg2;
- (void)providerTaskCompletedWithError:(id)arg1;
- (void)providerTaskCompletedWithUrl:(id)arg1 presenter:(id)arg2;
- (void)validatorTaskCompleteWithUrls:(id)arg1;
- (id)productTaskGetUrls:(id)arg1;
- (_Bool)isReady:(id)arg1;
- (void)presentIfNeeded:(id)arg1;
- (void)prepareIfNeeded:(id)arg1;
- (void)presentUrls:(id)arg1;
- (void)prepareUrls:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
