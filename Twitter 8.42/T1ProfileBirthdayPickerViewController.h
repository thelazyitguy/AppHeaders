//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ProfileBirthdayDisplayFormViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1ProfileBirthdayValuePicker-Protocol.h>
#import <T1Twitter/TFNPickerViewControllerDelegate-Protocol.h>

@class NSDate, NSSet, NSString, T1ProfileBirthdayDisplayFormViewController, TFNDataViewItem, TFNTwitterAccount, TFSTwitterUserExtendedProfileBirthday, UIDatePicker;
@protocol TFNPickableValue;

@interface T1ProfileBirthdayPickerViewController : TFNItemsDataViewController <T1ProfileBirthdayDisplayFormViewControllerDelegate, T1ProfileBirthdayValuePicker, TFNPickerViewControllerDelegate>
{
    _Bool _isBirthdayPresentInProfile;
    _Bool _isDatePickerVisible;
    _Bool _hasVisibilityChanged;
    _Bool _hasDateChanged;
    CDUnknownBlockType _didPickValueBlock;
    TFNTwitterAccount *_account;
    NSDate *_maximumDate;
    NSDate *_maximumDateForNonMinor;
    NSDate *_minimumDate;
    T1ProfileBirthdayDisplayFormViewController *_dateDisplayViewController;
    TFSTwitterUserExtendedProfileBirthday *_currentBirthday;
    TFSTwitterUserExtendedProfileBirthday *_updatedBirthday;
    UIDatePicker *_datePicker;
    TFNDataViewItem *_dateRemoveItem;
    TFNDataViewItem *_visibilitySectionFooter;
    TFNDataViewItem *_visibilitySectionHeader;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _doneBlock;
    CDUnknownBlockType _visibilitySetBlock;
    CDUnknownBlockType _viewDidAppearFullyActionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearFullyActionBlock; // @synthesize viewDidAppearFullyActionBlock=_viewDidAppearFullyActionBlock;
@property(copy, nonatomic) CDUnknownBlockType visibilitySetBlock; // @synthesize visibilitySetBlock=_visibilitySetBlock;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) TFNDataViewItem *visibilitySectionHeader; // @synthesize visibilitySectionHeader=_visibilitySectionHeader;
@property(retain, nonatomic) TFNDataViewItem *visibilitySectionFooter; // @synthesize visibilitySectionFooter=_visibilitySectionFooter;
@property(retain, nonatomic) TFNDataViewItem *dateRemoveItem; // @synthesize dateRemoveItem=_dateRemoveItem;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) TFSTwitterUserExtendedProfileBirthday *updatedBirthday; // @synthesize updatedBirthday=_updatedBirthday;
@property(retain, nonatomic) TFSTwitterUserExtendedProfileBirthday *currentBirthday; // @synthesize currentBirthday=_currentBirthday;
@property(retain, nonatomic) T1ProfileBirthdayDisplayFormViewController *dateDisplayViewController; // @synthesize dateDisplayViewController=_dateDisplayViewController;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) NSDate *maximumDateForNonMinor; // @synthesize maximumDateForNonMinor=_maximumDateForNonMinor;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(nonatomic) _Bool hasDateChanged; // @synthesize hasDateChanged=_hasDateChanged;
@property(nonatomic) _Bool hasVisibilityChanged; // @synthesize hasVisibilityChanged=_hasVisibilityChanged;
@property(nonatomic) _Bool isDatePickerVisible; // @synthesize isDatePickerVisible=_isDatePickerVisible;
@property(nonatomic) _Bool isBirthdayPresentInProfile; // @synthesize isBirthdayPresentInProfile=_isBirthdayPresentInProfile;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType didPickValueBlock; // @synthesize didPickValueBlock=_didPickValueBlock;
- (id)scribeSection;
- (id)scribePage;
- (void)_changeAccessibilityFocusToItem:(id)arg1;
- (id)_visibilityItemWithLabel:(id)arg1 pickerTitle:(id)arg2 visibility:(long long)arg3 shouldRestrictChoicesToSelfIfMinor:(_Bool)arg4 setBlock:(CDUnknownBlockType)arg5;
- (void)_updateAndScribeVisibilityChangeForElement:(id)arg1;
- (void)_enforceMinorProtection;
- (void)_observeDateChange;
- (_Bool)_dateIndicatesMinor;
- (id)_defaultDate;
- (void)_calculateDateRanges;
- (void)commitChanges;
@property(readonly, nonatomic) TFNDataViewItem *visibilitySelectYearItem;
@property(readonly, nonatomic) TFNDataViewItem *visibilitySelectDateItem;
@property(readonly, copy, nonatomic) NSSet *pickedValues;
@property(readonly, nonatomic) id <TFNPickableValue> pickedValue;
@property(readonly, nonatomic) _Bool canPickMultipleValues;
- (void)pickerViewController:(id)arg1 didPickValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(_Bool)arg4 willDismiss:(_Bool)arg5;
- (id)_t1_viewForDatePickerVisible;
- (void)update:(_Bool)arg1;
- (void)profileBirthdayDisplayFormViewControllerWillChange:(id)arg1;
- (struct CGSize)constraintSizeForProfileBirthdayDisplayFormViewController:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, copy, nonatomic) TFSTwitterUserExtendedProfileBirthday *pickedBirthdayValue;
- (void)_t1_didTapDone:(id)arg1;
- (void)_t1_didTapCancel:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 birthday:(id)arg2 doneBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long index;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *valueQuery;

@end

