//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAVastParsing-Protocol.h>

@interface SMAVastParser : NSObject <SMAVastParsing>
{
    Class _xmlConverter;
}

@property(retain, nonatomic) Class xmlConverter; // @synthesize xmlConverter=_xmlConverter;
- (void).cxx_destruct;
- (_Bool)hasVastAd:(id)arg1;
- (void)removeUnprocessedAdsFromRoot:(id)arg1;
- (_Bool)hasVastOnlyAdPod:(id)arg1;
- (void)processVastAdResult:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)resolveWrapper:(id)arg1 forRootItem:(id)arg2 depth:(long long)arg3 callback:(CDUnknownBlockType)arg4;
- (void)buildVastModelFromDictionary:(id)arg1 depth:(long long)arg2 allowWrapperResolving:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)parseVastXMLData:(id)arg1 depth:(long long)arg2 allowWrapperResolving:(_Bool)arg3 parseResult:(CDUnknownBlockType)arg4;
- (void)parseVastXMLData:(id)arg1 parseResult:(CDUnknownBlockType)arg2;
- (void)parseXMLData:(id)arg1 parseResult:(CDUnknownBlockType)arg2;
- (id)initWithXMLConverter:(Class)arg1;

@end
