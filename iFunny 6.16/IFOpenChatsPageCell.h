//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFProjectElementListCell.h>

@class UIImageView, UILabel;

@interface IFOpenChatsPageCell : IFProjectElementListCell
{
    UILabel *_detailLabel;
    UILabel *_memberCountLabel;
    UIImageView *_chatImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *chatImageView; // @synthesize chatImageView=_chatImageView;
@property(retain, nonatomic) UILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (void)configureWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

