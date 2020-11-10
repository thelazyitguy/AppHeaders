//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentView.h>

#import <Module_Framework/GOOTextFieldValidator-Protocol.h>
#import <Module_Framework/UITextFieldDelegate-Protocol.h>

@class GKSTitleIconListItemView, GOOTextField, NSNumber, NSString, UILabel, UIView;
@protocol GKSEditableTextListItemContentViewDelegate;

@interface GKSEditableTextListItemContentView : GOOBaseContentView <GOOTextFieldValidator, UITextFieldDelegate>
{
    _Bool _numericField;
    GOOTextField *_textField;
    UIView *_textView;
    GKSTitleIconListItemView *_titleIconWrapper;
    UILabel *_errorLabel;
    id <GKSEditableTextListItemContentViewDelegate> _delegate;
}

+ (id)titleIconWrapperForView:(id)arg1 withObject:(id)arg2;
+ (id)textFieldForObject:(id)arg1 withValidator:(id)arg2;
+ (_Bool)requiresConstrainedBasedLayout;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool numericField; // @synthesize numericField=_numericField;
@property(nonatomic) __weak id <GKSEditableTextListItemContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) GKSTitleIconListItemView *titleIconWrapper; // @synthesize titleIconWrapper=_titleIconWrapper;
@property(retain, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) GOOTextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) NSNumber *exceptionType;
- (_Bool)isNumericString:(id)arg1;
- (void)configureFieldsForInvalidStateWithErrorMessage:(id)arg1;
- (void)configureFieldsForValidState;
- (_Bool)textFieldShouldReturn:(id)arg1;
@property(readonly, nonatomic) long long announcementFrequency;
- (id)validationResultsForTextField:(id)arg1;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

