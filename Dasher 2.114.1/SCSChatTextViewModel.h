//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SCSChatTextViewModel : NSObject
{
    _Bool _isLocalUser;
    NSString *_text;
    NSString *_agentName;
    UIImage *_agentAvatar;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) UIImage *agentAvatar; // @synthesize agentAvatar=_agentAvatar;
@property(copy, nonatomic) NSString *agentName; // @synthesize agentName=_agentName;
@property(nonatomic) _Bool isLocalUser; // @synthesize isLocalUser=_isLocalUser;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
