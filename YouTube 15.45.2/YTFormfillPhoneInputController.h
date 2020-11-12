//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/UITextFieldDelegate-Protocol.h>
#import <Module_Framework/YTFormfillInputControllerProtocol-Protocol.h>
#import <Module_Framework/YTFormfillPhoneRegionPickerDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, YTFormfillPhoneInputView, YTIFormfillInputRenderer, YTIFormfillPhoneNumberInputRenderer;
@protocol YTResponder;

@interface YTFormfillPhoneInputController : NSObject <UITextFieldDelegate, YTFormfillPhoneRegionPickerDelegate, YTResponder, YTFormfillInputControllerProtocol>
{
    YTIFormfillInputRenderer *_inputRenderer;
    YTIFormfillPhoneNumberInputRenderer *_phoneNumberInputRenderer;
    YTFormfillPhoneInputView *_phoneInputView;
    _Bool _edited;
    _Bool _obfuscating;
    NSString *_overrideErrorText;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

+ (_Bool)legacyIsValidPhoneNumber:(id)arg1 forRegion:(id)arg2 isOptional:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)onEdit;
- (void)onRegionPickerClick;
- (void)onHelpButtonClick;
- (id)initialRegion:(id)arg1;
- (id)formattedPhoneNumber:(id)arg1 regionCode:(id)arg2 numberFormat:(long long)arg3;
- (id)isValidPhoneNumber;
- (void)onRegionSelected:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)valueDifferentFromInitial;
- (void)populateLoggingData:(id)arg1;
- (id)value;
- (id)view;
- (id)validate;
- (id)inputRenderer;
- (id)initWithRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
