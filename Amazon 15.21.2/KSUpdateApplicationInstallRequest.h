//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class KSApplicationInstallState, KSApplicationUpdateSecurity;

@interface KSUpdateApplicationInstallRequest : CoralModel <NSCoding, NSCopying>
{
    KSApplicationUpdateSecurity *_security;
    KSApplicationInstallState *_state;
}

+ (id)type;
@property(retain, nonatomic) KSApplicationInstallState *state; // @synthesize state=_state;
@property(retain, nonatomic) KSApplicationUpdateSecurity *security; // @synthesize security=_security;
- (void).cxx_destruct;

@end
