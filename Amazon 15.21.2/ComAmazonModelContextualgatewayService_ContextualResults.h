//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray;

@interface ComAmazonModelContextualgatewayService_ContextualResults : CoralModel <NSCoding, NSCopying>
{
    NSArray *_productInfosList;
    NSArray *_keyPhrasesList;
}

+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) NSArray *keyPhrasesList; // @synthesize keyPhrasesList=_keyPhrasesList;
@property(retain, nonatomic) NSArray *productInfosList; // @synthesize productInfosList=_productInfosList;
- (void).cxx_destruct;

@end
