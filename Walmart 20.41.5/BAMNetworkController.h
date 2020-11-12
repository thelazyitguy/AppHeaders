//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BAMALESessionController;
@protocol BAMNetworkControllerDelegate;

@interface BAMNetworkController : NSObject
{
    _Bool _shouldScanWithoutScanReference;
    _Bool _resultRequestSuccessfullyDone;
    _Bool _imageRequestSuccessfullyDone;
    id <BAMNetworkControllerDelegate> _delegate;
    BAMALESessionController *_aleSessionController;
}

@property(retain, nonatomic) BAMALESessionController *aleSessionController; // @synthesize aleSessionController=_aleSessionController;
@property(nonatomic) _Bool imageRequestSuccessfullyDone; // @synthesize imageRequestSuccessfullyDone=_imageRequestSuccessfullyDone;
@property(nonatomic) _Bool resultRequestSuccessfullyDone; // @synthesize resultRequestSuccessfullyDone=_resultRequestSuccessfullyDone;
@property(nonatomic) _Bool shouldScanWithoutScanReference; // @synthesize shouldScanWithoutScanReference=_shouldScanWithoutScanReference;
@property(nonatomic) __weak id <BAMNetworkControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)apiSecret;
- (id)apiToken;
- (id)baseURL;
- (id)mobileDeviceDetails;
- (id)setupBaseConfig:(id)arg1;
- (void)sendUpdateWithConfiguration:(id)arg1;
- (void)sendResultWithConfiguration:(id)arg1;
- (void)sendImageWithConfiguration:(id)arg1;
- (void)sendInitiate;
- (void)unset;
- (void)cancelUpdateTasks;
- (void)cancelResultTasks;
- (void)cancelImageTasks;
- (void)cancelInitiateTasks;
- (void)cancelTasks:(id)arg1;
- (void)cancelAllTasks;
- (void)resetBoolFlags;
- (void)reset;
- (void)initStateMachine;
- (void)takeOverControl;
- (id)init;

@end
