//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <Funny/IFMenuCellProtocol-Protocol.h>
#import <Funny/IFNoFreshSetTimerDelegate-Protocol.h>

@class IFTimerView, NSLayoutConstraint, NSObject, NSString, UILabel, UIView;
@protocol IFMenuCellInfoProtocol, IFNoFreshSetTimerProtocol;

@interface IFMenuCell : UITableViewCell <IFNoFreshSetTimerDelegate, IFMenuCellProtocol>
{
    NSObject<IFMenuCellInfoProtocol> *_cellInfo;
    UILabel *_title;
    UIView *_circleBadge;
    UILabel *_badge;
    NSLayoutConstraint *_horisontalOffset;
    IFTimerView *_freshSetTimerView;
    NSObject<IFNoFreshSetTimerProtocol> *_timer;
}

+ (double)rowHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<IFNoFreshSetTimerProtocol> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) IFTimerView *freshSetTimerView; // @synthesize freshSetTimerView=_freshSetTimerView;
@property(retain, nonatomic) NSLayoutConstraint *horisontalOffset; // @synthesize horisontalOffset=_horisontalOffset;
@property(retain, nonatomic) UILabel *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UIView *circleBadge; // @synthesize circleBadge=_circleBadge;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) NSObject<IFMenuCellInfoProtocol> *cellInfo; // @synthesize cellInfo=_cellInfo;
- (void)updateTitleTextColor;
- (void)updateWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 seconds:(unsigned long long)arg3;
- (void)updateBadge;
- (void)prepareForResuse;
- (void)updateSelection;
- (void)setHighlighted:(_Bool)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)addTimerView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
