//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FNROComment, IFCommentsTableViewCell, NSIndexPath, UITableView;

@interface IFCommentsActiveCellView : UIView
{
    FNROComment *_comment;
    NSIndexPath *_commentIndexPath;
    UITableView *_commentsTable;
    IFCommentsTableViewCell *_commentCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IFCommentsTableViewCell *commentCell; // @synthesize commentCell=_commentCell;
@property(retain, nonatomic) UITableView *commentsTable; // @synthesize commentsTable=_commentsTable;
@property(retain, nonatomic) NSIndexPath *commentIndexPath; // @synthesize commentIndexPath=_commentIndexPath;
@property(retain, nonatomic) FNROComment *comment; // @synthesize comment=_comment;
- (void)layoutSubviews;
- (void)updateCellFrame;
- (void)tableScrolled;
- (void)showCell:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end

