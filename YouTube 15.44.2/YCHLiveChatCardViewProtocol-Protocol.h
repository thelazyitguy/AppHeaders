//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, YTImageView;
@protocol YTResponder;

@protocol YCHLiveChatCardViewProtocol <NSObject>
@property(nonatomic) _Bool dismissedByUser;
- (_Bool)shouldResetVisibility;
- (YTImageView *)cardContentThumbnailImageView;
- (unsigned long long)cardLocation;
- (NSString *)cardId;
- (void)updateCardViewWithMode:(unsigned long long)arg1;
- (void)setCardContentEntry:(id)arg1 mode:(unsigned long long)arg2 location:(unsigned long long)arg3 parentResponder:(id <YTResponder>)arg4;
@end

