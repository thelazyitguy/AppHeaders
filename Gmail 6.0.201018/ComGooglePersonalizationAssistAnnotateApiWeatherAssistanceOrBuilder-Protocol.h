//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGooglePersonalizationAssistAnnotateApiTemperature, ComGooglePersonalizationAssistAnnotateApiTime, ComGooglePersonalizationAssistAnnotateApiWeatherDailyForecast, ComGooglePersonalizationAssistAnnotateWeatherCondition, NSString;
@protocol JavaUtilList;

@protocol ComGooglePersonalizationAssistAnnotateApiWeatherAssistanceOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getForecastText;
- (_Bool)hasForecastText;
- (NSString *)getForecastUrl;
- (_Bool)hasForecastUrl;
- (ComGooglePersonalizationAssistAnnotateApiWeatherDailyForecast *)getDailyForecastWithInt:(int)arg1;
- (id <JavaUtilList>)getDailyForecastList;
- (int)getDailyForecastCount;
- (ComGooglePersonalizationAssistAnnotateApiTime *)getForecastStartDate;
- (_Bool)hasForecastStartDate;
- (ComGooglePersonalizationAssistAnnotateApiTime *)getCurrentUpdateTime;
- (_Bool)hasCurrentUpdateTime;
- (int)getWindSpeedMph;
- (_Bool)hasWindSpeedMph;
- (int)getWindDirection;
- (_Bool)hasWindDirection;
- (int)getChanceOfPrecipitation;
- (_Bool)hasChanceOfPrecipitation;
- (int)getHumidity;
- (_Bool)hasHumidity;
- (ComGooglePersonalizationAssistAnnotateApiTemperature *)getCurrentTemp;
- (_Bool)hasCurrentTemp;
- (NSString *)getCurrentConditionDesc;
- (_Bool)hasCurrentConditionDesc;
- (ComGooglePersonalizationAssistAnnotateWeatherCondition *)getCurrentCondition;
- (_Bool)hasCurrentCondition;
- (NSString *)getLocation;
- (_Bool)hasLocation;
@end

