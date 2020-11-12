//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <Apptentive/ATSurveyViewModelDelegate-Protocol.h>
#import <Apptentive/ApptentiveCollectionViewDataSource-Protocol.h>
#import <Apptentive/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <Apptentive/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <Apptentive/UITextFieldDelegate-Protocol.h>
#import <Apptentive/UITextViewDelegate-Protocol.h>

@class ApptentiveInteractionController, ApptentiveSurveyGreetingView, ApptentiveSurveySubmitButton, ApptentiveSurveyViewModel, NSIndexPath, NSLayoutConstraint, NSString, UIBarButtonItem, UIColor, UITextView, UIView;

@interface ApptentiveSurveyViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UITextViewDelegate, UITextFieldDelegate, UIAdaptivePresentationControllerDelegate, ApptentiveCollectionViewDataSource, ATSurveyViewModelDelegate>
{
    _Bool _keyboardVisible;
    _Bool _shouldPostAccessibiltyNotificationOnScrollViewDidEndScrollingAnimation;
    double _lineHeightOfQuestionFont;
    ApptentiveSurveyViewModel *_viewModel;
    ApptentiveInteractionController *_interactionController;
    ApptentiveSurveyGreetingView *_headerView;
    UIView *_headerBackgroundView;
    UIView *_footerView;
    UIView *_footerBackgroundView;
    ApptentiveSurveySubmitButton *_submitButton;
    UIBarButtonItem *_missingRequiredItem;
    UITextView *_termsAndConditionsTextView;
    NSLayoutConstraint *_termsAndConditionsTopConstraint;
    NSIndexPath *_editingIndexPath;
    double _toolbarInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldPostAccessibiltyNotificationOnScrollViewDidEndScrollingAnimation; // @synthesize shouldPostAccessibiltyNotificationOnScrollViewDidEndScrollingAnimation=_shouldPostAccessibiltyNotificationOnScrollViewDidEndScrollingAnimation;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) double toolbarInset; // @synthesize toolbarInset=_toolbarInset;
@property(retain, nonatomic) NSIndexPath *editingIndexPath; // @synthesize editingIndexPath=_editingIndexPath;
@property(retain, nonatomic) NSLayoutConstraint *termsAndConditionsTopConstraint; // @synthesize termsAndConditionsTopConstraint=_termsAndConditionsTopConstraint;
@property(retain, nonatomic) UITextView *termsAndConditionsTextView; // @synthesize termsAndConditionsTextView=_termsAndConditionsTextView;
@property(retain, nonatomic) UIBarButtonItem *missingRequiredItem; // @synthesize missingRequiredItem=_missingRequiredItem;
@property(retain, nonatomic) ApptentiveSurveySubmitButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIView *footerBackgroundView; // @synthesize footerBackgroundView=_footerBackgroundView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(retain, nonatomic) ApptentiveSurveyGreetingView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) ApptentiveInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) ApptentiveSurveyViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)maybeAnimateOtherSizeChangeAtIndexPath:(id)arg1;
- (void)setToolbarHidden:(_Bool)arg1;
- (void)adjustForKeyboard:(id)arg1;
- (void)viewModel:(id)arg1 didDeselectAnswerAtIndexPath:(id)arg2;
- (void)viewModelValidationChanged:(id)arg1 isValid:(_Bool)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *invalidColor;
@property(readonly, nonatomic) UIColor *validColor;
- (_Bool)sectionAtIndexIsValid:(long long)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(readonly, nonatomic) double lineHeightOfQuestionFont; // @synthesize lineHeightOfQuestionFont=_lineHeightOfQuestionFont;
- (void)showAbout:(id)arg1;
- (void)close:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)submit:(id)arg1;
- (void)sizeDidUpdate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
