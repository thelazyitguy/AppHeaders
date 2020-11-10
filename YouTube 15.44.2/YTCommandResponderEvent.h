//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class NSString, UIView, UIViewController, YTICommand, YTMonotonicDate, YTTrackingResponderEvent;
@protocol YTTransition;

@interface YTCommandResponderEvent : YTResponderEvent
{
    _Bool _sendClick;
    _Bool _externallyInitialized;
    _Bool _externalClick;
    _Bool _forcePushViewController;
    _Bool _shouldCollapseWatch;
    _Bool _shouldAnimatePush;
    YTICommand *_command;
    UIView *_fromView;
    NSString *_displayTitle;
    YTTrackingResponderEvent *_trackingResponderEvent;
    id _entry;
    UIViewController *_viewControllerToReplace;
    id <YTTransition> _transition;
    YTMonotonicDate *_navigationDate;
    CDUnknownBlockType _splitPaneSelectMatchingBlock;
    CDUnknownBlockType _completionBlock;
}

+ (id)eventWithCommand:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3 entry:(id)arg4 externalClick:(_Bool)arg5 externallyInitialized:(_Bool)arg6 sendClick:(_Bool)arg7 firstResponder:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
+ (id)eventWithCommand:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3 entry:(id)arg4 externalClick:(_Bool)arg5 externallyInitialized:(_Bool)arg6 firstResponder:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;
+ (id)eventWithCommand:(id)arg1 entry:(id)arg2 sendClick:(_Bool)arg3 firstResponder:(id)arg4;
+ (id)eventWithCommand:(id)arg1 fromView:(id)arg2 entry:(id)arg3 sendClick:(_Bool)arg4 firstResponder:(id)arg5;
+ (id)eventWithCommand:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3 transition:(id)arg4 firstResponder:(id)arg5;
+ (id)eventWithCommand:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3 entry:(id)arg4 externalClick:(_Bool)arg5 externallyInitialized:(_Bool)arg6 transition:(id)arg7 firstResponder:(id)arg8;
+ (id)eventWithCommand:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3 entry:(id)arg4 externalClick:(_Bool)arg5 externallyInitialized:(_Bool)arg6 firstResponder:(id)arg7;
+ (id)eventWithCommand:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3 entry:(id)arg4 externalClick:(_Bool)arg5 firstResponder:(id)arg6;
+ (id)eventWithCommand:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3 firstResponder:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool shouldAnimatePush; // @synthesize shouldAnimatePush=_shouldAnimatePush;
@property(nonatomic) _Bool shouldCollapseWatch; // @synthesize shouldCollapseWatch=_shouldCollapseWatch;
@property(copy, nonatomic) CDUnknownBlockType splitPaneSelectMatchingBlock; // @synthesize splitPaneSelectMatchingBlock=_splitPaneSelectMatchingBlock;
@property(retain, nonatomic) YTMonotonicDate *navigationDate; // @synthesize navigationDate=_navigationDate;
@property(readonly, nonatomic) id <YTTransition> transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIViewController *viewControllerToReplace; // @synthesize viewControllerToReplace=_viewControllerToReplace;
@property(nonatomic) _Bool forcePushViewController; // @synthesize forcePushViewController=_forcePushViewController;
@property(readonly, nonatomic, getter=isExternalClick) _Bool externalClick; // @synthesize externalClick=_externalClick;
@property(readonly, nonatomic) _Bool externallyInitialized; // @synthesize externallyInitialized=_externallyInitialized;
@property(readonly, nonatomic) id entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) YTTrackingResponderEvent *trackingResponderEvent; // @synthesize trackingResponderEvent=_trackingResponderEvent;
@property(readonly, nonatomic, getter=shouldSendClick) _Bool sendClick; // @synthesize sendClick=_sendClick;
@property(readonly, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(readonly, nonatomic) YTICommand *command; // @synthesize command=_command;
- (void)send;
- (id)initWithCommand:(id)arg1 firstResponder:(id)arg2 entry:(id)arg3 fromView:(id)arg4 displayTitle:(id)arg5 externalClick:(_Bool)arg6 externallyInitialized:(_Bool)arg7 transition:(id)arg8 sendClick:(_Bool)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end

