//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDBaseMessage.h>

@class NSString;

@interface SBDAdminMessage : SBDBaseMessage
{
    _Bool _silent;
    _Bool _forceUpdateLastMessage;
    NSString *_message;
}

@property(nonatomic, getter=isForceUpdateLastMessage) _Bool forceUpdateLastMessage; // @synthesize forceUpdateLastMessage=_forceUpdateLastMessage;
@property(nonatomic, getter=isSilent) _Bool silent; // @synthesize silent=_silent;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)isEqualToMessage:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_toDictionary;
- (id)serialize;

@end
