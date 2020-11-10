//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSString;

@interface GFMIPersonIdentifier : NSObject <NSCopying>
{
    NSString *_personID;
    NSString *_invitationID;
}

+ (id)invitedMemberIdentifier:(id)arg1;
+ (id)currentMemberIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *invitationID; // @synthesize invitationID=_invitationID;
@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

