//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOCardStyle.h>

@interface GOOTableCellStyle : GOOCardStyle
{
    struct UIEdgeInsets _sectionHeaderInsets;
    _Bool _didSizeSections;
}

+ (id)nilHeaderViewForTableView:(id)arg1;
+ (void)prepareTableView:(id)arg1;
+ (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
+ (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 sectionTitle:(id)arg3;
+ (double)extraHeightForCellAtIndexPath:(id)arg1 tableView:(id)arg2;
+ (void)layoutSubviewsOfCell:(id)arg1 forTableView:(id)arg2 hasCellDivider:(_Bool)arg3;
+ (void)layoutSubviewsOfCell:(id)arg1 hasCellDivider:(_Bool)arg2;
+ (void)layoutSubviewsOfCell:(id)arg1;
+ (struct UIEdgeInsets)contentViewInsetsForTableView:(id)arg1;
+ (struct UIEdgeInsets)backgroundViewHorizontalInsetsForTableView:(id)arg1;
+ (double)backgroundViewHorizontalInsetForTableView:(id)arg1;
+ (id)parentTableViewForCell:(id)arg1;
+ (struct UIEdgeInsets)contentViewInsetsAtIndexPath:(id)arg1 tableView:(id)arg2;
- (_Bool)shouldLayoutCellViewsForRTL;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForContentViewObject:(id)arg2 forHeaderInSection:(long long)arg3;
- (void)tableView:(id)arg1 updateBackgroundForHeaderView:(id)arg2 forHeaderInSection:(long long)arg3;
- (id)init;

@end

