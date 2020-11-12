//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;

@interface RobotNameViewController : BaseViewController <UITextFieldDelegate>
{
    UILabel *_headerLabel;
    UITextField *_nameField;
    NSString *_defaultName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property(nonatomic) __weak UITextField *nameField; // @synthesize nameField=_nameField;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)configureAccessibility;
- (_Bool)shouldReplaceRobotNameInTextField:(id)arg1 withReplacementName:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)handleContinue;
- (void)initUIStyles;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
