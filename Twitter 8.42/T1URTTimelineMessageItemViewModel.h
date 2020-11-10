//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFNTwitterFeedbackInfo, TFSURTRichText, _TtCVOV14TFSTwitterCore16URTTimelineEntry7Content4Item15ClientEventInfo;
@protocol T1TwitterTimelineMessageTextAction;

@interface T1URTTimelineMessageItemViewModel : NSObject
{
    // Error parsing type: , name: entryID
    // Error parsing type: , name: messageItem
    // Error parsing type: , name: clientEventInfo
    // Error parsing type: , name: entryContext
    // Error parsing type: , name: feedbackContext
    // Error parsing type: , name: shouldLogImpression
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSArray *impressionCallbackEndpoints;
@property(nonatomic, readonly) TFNTwitterFeedbackInfo *feedbackInfo;
@property(nonatomic, readonly) _Bool isDismissible;
@property(nonatomic, readonly) NSString *scribeComponentForSecondaryAction;
@property(nonatomic, readonly) NSString *scribeComponentForPrimaryAction;
@property(nonatomic, readonly) id <T1TwitterTimelineMessageTextAction> secondaryButtonAction;
@property(nonatomic, readonly) id <T1TwitterTimelineMessageTextAction> primaryButtonAction;
@property(nonatomic, readonly) TFSURTRichText *bodyRichText;
@property(nonatomic, readonly) TFSURTRichText *headerRichText;
@property(nonatomic, readonly) long long bodyAlignment;
@property(nonatomic, readonly) long long headerAlignment;
@property(nonatomic, readonly) NSArray *imageVariants;
@property(nonatomic, readonly) long long layoutType;
@property(nonatomic) _Bool shouldLogImpression; // @synthesize shouldLogImpression;
- (id)scribeParametersWithPosition:(long long)arg1;
@property(nonatomic, readonly) _TtCVOV14TFSTwitterCore16URTTimelineEntry7Content4Item15ClientEventInfo *clientEventInfo; // @synthesize clientEventInfo;
@property(nonatomic, readonly) NSString *entryID;

@end

