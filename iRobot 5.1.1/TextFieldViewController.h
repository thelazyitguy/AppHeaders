//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ScriptedNavigation/ScriptedViewController-Protocol.h>
#import <ScriptedNavigation/UITextFieldDelegate-Protocol.h>

@class NSDictionary, NSString, UILabel, UITextField;

@interface TextFieldViewController : UIViewController <UITextFieldDelegate, ScriptedViewController>
{
    NSDictionary *_screenDescriptor;
    NSString *_screenKey;
    UITextField *_textField;
    UILabel *_headerTextLabel;
    UILabel *_infoTextLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *infoTextLabel; // @synthesize infoTextLabel=_infoTextLabel;
@property(nonatomic) __weak UILabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSString *screenKey; // @synthesize screenKey=_screenKey;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)styleNameTextField;
- (void)styleTextField:(id)arg1;
- (void)processTextFieldText:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *screenDescriptor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDictionary *subScreenViewControllers;
@property(readonly) Class superclass;

@end
