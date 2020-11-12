//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDView.h"

@class IDEvent;

@interface IDPopupView : IDView
{
    IDEvent *_popupEvent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDEvent *popupEvent; // @synthesize popupEvent=_popupEvent;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)triggerPopupEvent:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 popupEvent:(long long)arg4;

@end
