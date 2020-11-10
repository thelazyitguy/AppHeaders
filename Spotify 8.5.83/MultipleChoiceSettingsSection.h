//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray;

@interface MultipleChoiceSettingsSection : SettingsSection
{
    long long _selectedChoiceIndex;
    NSArray *_cells;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(nonatomic) long long selectedChoiceIndex; // @synthesize selectedChoiceIndex=_selectedChoiceIndex;
- (void)setAvailabilityState:(_Bool)arg1 onCell:(id)arg2;
- (void)setSelectionState:(_Bool)arg1 onCell:(id)arg2;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)reloadChoices;
- (_Bool)shouldCellBeDisabledForIndex:(long long)arg1;
- (id)subtitleForChoiceIndex:(long long)arg1;
- (id)titleForChoiceIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfChoices;
- (id)initWithSettingsViewController:(id)arg1;

@end

