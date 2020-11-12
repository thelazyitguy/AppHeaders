//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DMSDK/NSCoding-Protocol.h>
#import <DMSDK/NSCopying-Protocol.h>

@class DMSCPMParser, NSDictionary, NSString;

@interface DMSPayload : NSObject <NSCoding, NSCopying>
{
    NSDictionary *_representations;
    DMSCPMParser *_cpmParser;
    NSString *_identifier;
}

+ (id)rangeTwoStringFromRangeThreeString:(id)arg1;
+ (void)initialize;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)locallyGeneratedURLForServer:(id)arg1;
- (id)fastPathWithServer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSDictionary *representations;
@property(readonly) unsigned long long symbology;
- (id)initWithIdentifier:(id)arg1 obscureOption:(long long)arg2;
- (id)initWithIdentifier:(id)arg1;

@end
