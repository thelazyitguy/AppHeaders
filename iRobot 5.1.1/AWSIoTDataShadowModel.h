//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSMTLModel.h>

#import <AWSIoT/AWSMTLJSONSerializing-Protocol.h>

@class NSString;

@interface AWSIoTDataShadowModel : AWSMTLModel <AWSMTLJSONSerializing>
{
    NSString *_clientToken;
    NSString *_version;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *clientToken; // @synthesize clientToken=_clientToken;
- (void).cxx_destruct;

@end
