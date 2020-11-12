//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCApplicationLifecycleObserver-Protocol.h>
#import <ChromeInternal/DSCScrollViewObserver-Protocol.h>

@class NSHashTable, NSString, NVLAttentionSession, NVLVisualElement, UIView;
@protocol DSCScrollableView;

@interface DSCAttentionLoggerExperimental : NSObject <DSCApplicationLifecycleObserver, DSCScrollViewObserver>
{
    _Bool _attentionSessionActive;
    _Bool _firstShow;
    NVLVisualElement *_rootVisualElement;
    NVLAttentionSession *_attentionSession;
    UIView *_rootView;
    NSHashTable *_visualElements;
    id <DSCScrollableView> _contentView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool firstShow; // @synthesize firstShow=_firstShow;
@property(nonatomic) _Bool attentionSessionActive; // @synthesize attentionSessionActive=_attentionSessionActive;
@property(nonatomic) __weak id <DSCScrollableView> contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSHashTable *visualElements; // @synthesize visualElements=_visualElements;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) NVLAttentionSession *attentionSession; // @synthesize attentionSession=_attentionSession;
@property(retain, nonatomic) NVLVisualElement *rootVisualElement; // @synthesize rootVisualElement=_rootVisualElement;
- (_Bool)contentViewHasChildVisualElements:(id)arg1;
- (void)resetVisualElementFrames;
- (void)adjustChildVisualElementFramesOfView:(id)arg1 inRootView:(id)arg2 yOffSet:(double)arg3;
- (void)adjustVisualElementFramesForContentView:(id)arg1 yOffSet:(double)arg2;
- (void)hostApplicationWillResignActive;
- (void)hostApplicationDidBecomeActive;
- (void)initializeAttentionSession;
- (void)logViewportShown;
- (void)logViewportShownForContentView:(id)arg1;
- (void)scrollView:(id)arg1 didDisplayScrollItem:(id)arg2;
- (void)subviewDidStopScrolling:(id)arg1 forContentView:(id)arg2;
- (void)scrollViewDidDisappear:(id)arg1;
- (void)scrollViewDidAppear:(id)arg1;
- (void)scrollViewDidStopScrolling:(id)arg1;
- (void)scrollViewDidStartScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollView:(id)arg1 didChangeLayoutWithUpdateType:(long long)arg2;
- (void)dealloc;
- (id)initWithRootVisualElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
