//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDBasicButton.h"

@class IDModel, NSString;

@interface IDToolbarButton : IDBasicButton
{
    IDModel *_tooltipTextModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDModel *tooltipTextModel; // @synthesize tooltipTextModel=_tooltipTextModel;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
@property(nonatomic) long long tooltipTextId;
@property(copy, nonatomic) NSString *tooltipText;
- (id)initWithWidgetId:(long long)arg1 imageModel:(id)arg2 previewModel:(id)arg3 focusAction:(id)arg4 selectAction:(id)arg5;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2 tooltipModel:(id)arg3 imageModel:(id)arg4 targetModel:(id)arg5 actionId:(long long)arg6 focusId:(long long)arg7;
- (id)initWithWidgetId:(long long)arg1 tooltipModel:(id)arg2 imageModel:(id)arg3 targetModel:(id)arg4 actionId:(long long)arg5 focusId:(long long)arg6;
- (id)initWithWidgetId:(long long)arg1 tooltipModel:(id)arg2 imageModel:(id)arg3 previewModel:(id)arg4 focusAction:(id)arg5 selectAction:(id)arg6;

@end

