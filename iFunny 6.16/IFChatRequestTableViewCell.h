//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSObject, UIButton, UIImageView, UILabel, UIView;
@protocol IFChannelProtocol, IFChatRequestTableViewCellDelegate;

@interface IFChatRequestTableViewCell : UITableViewCell
{
    NSObject<IFChannelProtocol> *_content;
    NSObject<IFChatRequestTableViewCellDelegate> *_controller;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_invitationLabel;
    UIView *_unreadMessagesIndicatorView;
    UIButton *_acceptButton;
    UIButton *_rejectButton;
}

+ (double)height;
+ (id)reusableIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(nonatomic) __weak UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(nonatomic) __weak UIView *unreadMessagesIndicatorView; // @synthesize unreadMessagesIndicatorView=_unreadMessagesIndicatorView;
@property(nonatomic) __weak UILabel *invitationLabel; // @synthesize invitationLabel=_invitationLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak NSObject<IFChatRequestTableViewCellDelegate> *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSObject<IFChannelProtocol> *content; // @synthesize content=_content;
- (void)rejectDidTapped:(id)arg1;
- (void)acceptDidTapped:(id)arg1;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
