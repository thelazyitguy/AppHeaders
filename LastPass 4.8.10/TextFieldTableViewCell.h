//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TableViewModelCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UIButton, UITextField, UIToolbar;

@interface TextFieldTableViewCell : TableViewModelCell <UITextFieldDelegate>
{
    UIButton *_showPasswordButton;
    UIBarButtonItem *_showPasswordBarButtonItem;
    UIToolbar *_accessoryToolbar;
    _Bool _useKeyboardShowButton;
    _Bool _password;
    _Bool _username;
    UITextField *_textField;
    NSString *_initialValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *initialValue; // @synthesize initialValue=_initialValue;
@property(nonatomic, getter=isUsername) _Bool username; // @synthesize username=_username;
@property(nonatomic, getter=isPassword) _Bool password; // @synthesize password=_password;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)applicationWillResignActive:(id)arg1;
- (void)togglePassword;
- (void)detachPasswordAccessoryView;
- (void)attachPasswordAccessoryView;
- (void)store;
- (void)load;
- (void)setShowPasswordLabel;
- (void)showPassword_clicked:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (double)measureHeightForWidth:(double)arg1;
- (void)layoutForWidth:(double)arg1;
- (void)dealloc;
- (id)initWithReuseIdentififer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
