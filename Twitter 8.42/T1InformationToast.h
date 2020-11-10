//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ToastViewModel-Protocol.h>

@class NSArray, NSString, T1ToastAction, T1ToastScribeContext, UIColor, UIImage;
@protocol TFSTwitterCanonicalUser;

@interface T1InformationToast : NSObject <T1ToastViewModel>
{
    NSString *_messageText;
    NSString *_detailText;
    NSString *_iconName;
    double _displayDuration;
}

+ (id)copiedItemToast:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
- (id)initWithMessageText:(id)arg1 detailText:(id)arg2 iconName:(id)arg3 displayDuration:(double)arg4;
- (id)initWithMessageText:(id)arg1 detailText:(id)arg2 iconName:(id)arg3;
- (id)initWithMessageText:(id)arg1 detailText:(id)arg2;
- (id)initWithMessageText:(id)arg1 iconName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) T1ToastAction *alternateAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *detailTextBoldRanges;
@property(readonly, nonatomic) CDUnknownBlockType dismissCompetionHandler;
@property(readonly, nonatomic) long long hapticFeedbackType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIColor *iconColor;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSArray *messageTextBoldRanges;
@property(readonly, nonatomic) T1ToastAction *primaryAction;
@property(readonly, nonatomic) T1ToastScribeContext *scribeContext;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIImage *thumbnailImage;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> user;

@end
