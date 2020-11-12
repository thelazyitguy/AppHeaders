//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol T1UnifiedCardComponentView;

@interface T1UnifiedCardComponentViewEventHandler : NSObject
{
    UIView<T1UnifiedCardComponentView> *_componentView;
}

+ (id)_t1_scribeContextByAddingParamsFromComponentViewEvent:(id)arg1 inScribeContext:(id)arg2 presenterResult:(id)arg3;
+ (void)_t1_logPromotedEventForComponentEvent:(id)arg1 promotedContent:(id)arg2 account:(id)arg3 presenterResult:(id)arg4;
+ (_Bool)_t1_eventAllowsScribeCustomization:(id)arg1;
+ (id)scribeContextWithUCDetailsForComponentEvent:(id)arg1 scribeContext:(id)arg2 source:(id)arg3;
+ (CDUnknownBlockType)eventHandlerBlockForType:(unsigned long long)arg1 destination:(id)arg2;
+ (void)tempPromotedLoggingForEvent:(id)arg1 promotedContent:(id)arg2 account:(id)arg3 presenterResult:(id)arg4;
+ (_Bool)canHandleEventType:(unsigned long long)arg1 destination:(id)arg2;
+ (id)eventHandlerForComponentView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView<T1UnifiedCardComponentView> *componentView; // @synthesize componentView=_componentView;
- (id)handleEvent:(id)arg1 presentingViewController:(id)arg2 scribeContext:(id)arg3 promotedContent:(id)arg4 source:(id)arg5 account:(id)arg6;
- (id)initWithComponentView:(id)arg1;
- (id)init;

@end
