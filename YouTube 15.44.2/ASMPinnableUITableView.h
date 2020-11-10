//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <Module_Framework/ASMPinnableView-Protocol.h>

@interface ASMPinnableUITableView : UITableView <ASMPinnableView>
{
    _Bool _pinnedToTopContentOffset;
}

@property(nonatomic) _Bool pinnedToTopContentOffset; // @synthesize pinnedToTopContentOffset=_pinnedToTopContentOffset;
- (void)unpin;
- (void)pinToTopContentOffset:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;

@end

