//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/InstabugFrameworks-Protocol.h>

@class IBGOperation, NSString;

@interface InstabugBugReporting : NSObject <InstabugFrameworks>
{
    IBGOperation *_initializationOperation;
}

+ (void)destroy;
+ (void)reportFeedBackWithEmail:(id)arg1 comment:(id)arg2 screenshot:(id)arg3;
+ (void)reportBugWithEmail:(id)arg1 comment:(id)arg2 screenshot:(id)arg3;
+ (void)setViewHierarchyEnabled:(_Bool)arg1;
+ (void)setReportCategoriesWithTitles:(id)arg1 iconNames:(id)arg2;
+ (void)setAttachmentTypesEnabledScreenShot:(_Bool)arg1 extraScreenShot:(_Bool)arg2 galleryImage:(_Bool)arg3 voiceNote:(_Bool)arg4 screenRecording:(_Bool)arg5;
+ (void)setScreenshotCapturingHandler:(CDUnknownBlockType)arg1;
+ (void)setPostSendingDialogEnabled:(_Bool)arg1;
+ (void)setCommentFieldRequired:(_Bool)arg1;
+ (void)setEmailFieldRequired:(_Bool)arg1;
+ (void)setWillSkipScreenshotAnnotation:(_Bool)arg1;
+ (void)setShowEmailField:(_Bool)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) IBGOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
- (void).cxx_destruct;
- (id)initializationOperations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
