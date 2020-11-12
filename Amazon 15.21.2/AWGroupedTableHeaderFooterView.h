//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface AWGroupedTableHeaderFooterView : UIView
{
    struct UIEdgeInsets insets;
}

+ (struct UIEdgeInsets)groupedTableFooterInsets;
+ (struct UIEdgeInsets)groupedTableHeaderInsets;
+ (id)tableView:(id)arg1 viewForHeaderOrFooterWithView:(id)arg2 insets:(struct UIEdgeInsets)arg3;
+ (id)labelForHeaderOrFooterWithText:(id)arg1 font:(id)arg2;
+ (double)tableView:(id)arg1 heightForHeaderOrFooterWithText:(id)arg2 font:(id)arg3 insets:(struct UIEdgeInsets)arg4;
+ (id)tableView:(id)arg1 viewForFooterWithText:(id)arg2;
+ (double)tableView:(id)arg1 heightForFooterWithText:(id)arg2;
+ (id)tableView:(id)arg1 viewForHeaderWithText:(id)arg2;
+ (double)tableView:(id)arg1 heightForHeaderWithText:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;

@end
