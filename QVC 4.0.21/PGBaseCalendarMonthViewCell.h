//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PGCalendarMonthCellItemData;

@interface PGBaseCalendarMonthViewCell : UICollectionViewCell
{
    PGCalendarMonthCellItemData *_data;
}

+ (id)nib;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) PGCalendarMonthCellItemData *data; // @synthesize data=_data;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)didChangeData:(id)arg1;

@end
