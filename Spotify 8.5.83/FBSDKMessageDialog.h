//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKSharingDialog-Protocol.h"

@class NSString;
@protocol FBSDKSharingContent, FBSDKSharingDelegate;

@interface FBSDKMessageDialog : NSObject <FBSDKSharingDialog>
{
    _Bool _shouldFailOnDataError;
    id <FBSDKSharingDelegate> _delegate;
    id <FBSDKSharingContent> _shareContent;
}

+ (id)showWithContent:(id)arg1 delegate:(id)arg2;
+ (id)dialogWithContent:(id)arg1 delegate:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldFailOnDataError; // @synthesize shouldFailOnDataError=_shouldFailOnDataError;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logDialogShow;
- (void)_invokeDelegateDidFailWithError:(id)arg1;
- (void)_invokeDelegateDidCompleteWithResults:(id)arg1;
- (void)_invokeDelegateDidCancel;
- (void)_handleCompletionWithDialogResults:(id)arg1 response:(id)arg2;
- (_Bool)_canShowNative;
- (_Bool)validateWithError:(id *)arg1;
- (_Bool)show;
@property(readonly, nonatomic) _Bool canShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
