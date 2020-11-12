//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

#import "GTEViewCell-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSObject, NSString, UIPickerView;
@protocol GTELoggersProvider><GTETasksKitFeatureFlagsProvider, GTEPickerCellDelegate, GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider;

@interface GTEPickerCell : MDCCollectionViewCell <UIPickerViewDelegate, UIPickerViewDataSource, GTEViewCell>
{
    NSObject<GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider> *_appContext;
    NSObject<GTELoggersProvider><GTETasksKitFeatureFlagsProvider> *_userContext;
    UIPickerView *_pickerView;
    NSArray *_titles;
    id <GTEPickerCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GTEPickerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (struct CGSize)measureLayoutWithAvailableSize:(struct CGSize)arg1 andApply:(_Bool)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)titleForRow:(long long)arg1 inComponentAtIndex:(long long)arg2;
- (long long)selectedRowInComponentAtIndex:(long long)arg1;
- (void)updateWithTitlesByComponentIndex:(id)arg1 selectedRowByComponentIndex:(id)arg2;
- (void)prepareWithAppContext:(id)arg1 userContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
