//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDPreviewableWidget.h"

#import "IDFocusable-Protocol.h"
#import "IDHmiActionDelegate-Protocol.h"

@class IDHmiAction, IDModel, NSString;
@protocol IDCheckboxDelegate;

@interface IDCheckbox : IDPreviewableWidget <IDHmiActionDelegate, IDFocusable>
{
    long long _style;
    id <IDCheckboxDelegate> _delegate;
    IDModel *_textModel;
    IDHmiAction *_action;
    IDModel *_valueModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IDModel *valueModel; // @synthesize valueModel=_valueModel;
@property(readonly, nonatomic) IDHmiAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) __weak id <IDCheckboxDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)handleAction:(id)arg1 info:(id)arg2;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
@property(nonatomic, getter=isChecked) _Bool checked;
@property(nonatomic) long long textId;
@property(copy, nonatomic) NSString *text;
- (id)initWithWidgetId:(long long)arg1 previewModel:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2 textModel:(id)arg3 actionId:(long long)arg4 style:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 valueModel:(id)arg2 textModel:(id)arg3 actionId:(long long)arg4 style:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 valueModel:(id)arg2 textModel:(id)arg3 previewModel:(id)arg4 action:(id)arg5 style:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

