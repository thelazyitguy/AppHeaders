//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class LXPcdSectionModel, NSArray, NSMutableOrderedSet, NSString, UIBarButtonItem;
@protocol LXPcdChangeDelegate;

@interface LXChangePcdViewController : UITableViewController
{
    _Bool _shouldRemoveProvinceNameInHeader;
    int _currentSelectionType;
    id <LXPcdChangeDelegate> _delegate;
    UIBarButtonItem *_pcdHeader;
    LXPcdSectionModel *_pcdSection;
    NSArray *_pcdEntryArray;
    NSMutableOrderedSet *_currentAvailableSelections;
    NSString *_selectedProvince;
    NSString *_selectedCity;
    NSString *_selectedDistrict;
}

@property(retain, nonatomic) NSString *selectedDistrict; // @synthesize selectedDistrict=_selectedDistrict;
@property(retain, nonatomic) NSString *selectedCity; // @synthesize selectedCity=_selectedCity;
@property(retain, nonatomic) NSString *selectedProvince; // @synthesize selectedProvince=_selectedProvince;
@property(nonatomic) _Bool shouldRemoveProvinceNameInHeader; // @synthesize shouldRemoveProvinceNameInHeader=_shouldRemoveProvinceNameInHeader;
@property(nonatomic) int currentSelectionType; // @synthesize currentSelectionType=_currentSelectionType;
@property(retain, nonatomic) NSMutableOrderedSet *currentAvailableSelections; // @synthesize currentAvailableSelections=_currentAvailableSelections;
@property(retain, nonatomic) NSArray *pcdEntryArray; // @synthesize pcdEntryArray=_pcdEntryArray;
@property(nonatomic) __weak LXPcdSectionModel *pcdSection; // @synthesize pcdSection=_pcdSection;
@property(nonatomic) __weak UIBarButtonItem *pcdHeader; // @synthesize pcdHeader=_pcdHeader;
@property(retain, nonatomic) id <LXPcdChangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)goBack:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
