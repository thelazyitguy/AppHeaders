//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AWForm, NSString, UITextField;

@protocol AWFormController

@optional
- (_Bool)form:(AWForm *)arg1 shouldReturnFromLastTextField:(UITextField *)arg2;
- (_Bool)form:(AWForm *)arg1 shouldClearInputNamed:(NSString *)arg2;
- (_Bool)form:(AWForm *)arg1 shouldEndEditingInputNamed:(NSString *)arg2;
- (_Bool)form:(AWForm *)arg1 shouldBeginEditingInputNamed:(NSString *)arg2;
- (void)form:(AWForm *)arg1 shouldFocusInputNamed:(NSString *)arg2;
- (void)form:(AWForm *)arg1 didBecomeComplete:(_Bool)arg2;
- (void)form:(AWForm *)arg1 inputNamed:(NSString *)arg2 didBecomeComplete:(_Bool)arg3;
@end

