//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol _TtP13SlackCoreData21SLKChannelPermissions_
- (NSArray *)channelsWithNoPostingPermissions;
- (_Bool)canThreadInChannel:(NSString *)arg1;
- (_Bool)canPostInChannel:(NSString *)arg1;
- (void)makeChannelWriteable:(NSString *)arg1;
- (void)makeChannelNonThreadable:(NSString *)arg1;
- (void)updateNonThreadableChannels:(NSArray *)arg1;
- (void)makeChannelThreadOnly:(NSString *)arg1;
- (void)updateThreadOnlyChannels:(NSArray *)arg1;
- (void)makeChannelReadOnly:(NSString *)arg1;
- (void)updateReadOnlyChannels:(NSArray *)arg1;
@end
