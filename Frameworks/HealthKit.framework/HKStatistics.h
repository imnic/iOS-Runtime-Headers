/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKQuantity, HKQuantityType, NSArray, NSDate, NSDictionary;

@interface HKStatistics : NSObject <NSSecureCoding, NSCopying> {
    HKQuantity *_averageQuantity;
    NSDictionary *_averageQuantityBySource;
    unsigned int _dataCount;
    NSDate *_endDate;
    HKQuantity *_maximumQuantity;
    NSDictionary *_maximumQuantityBySource;
    HKQuantity *_minimumQuantity;
    NSDictionary *_minimumQuantityBySource;
    HKQuantityType *_quantityType;
    NSArray *_sources;
    NSDate *_startDate;
    HKQuantity *_sumQuantity;
    NSDictionary *_sumQuantityBySource;
}

@property(retain) HKQuantity * averageQuantity;
@property(retain) NSDictionary * averageQuantityBySource;
@property unsigned int dataCount;
@property(readonly) NSDate * endDate;
@property(retain) HKQuantity * maximumQuantity;
@property(retain) NSDictionary * maximumQuantityBySource;
@property(retain) HKQuantity * minimumQuantity;
@property(retain) NSDictionary * minimumQuantityBySource;
@property(readonly) HKQuantityType * quantityType;
@property(readonly) NSArray * sources;
@property(readonly) NSDate * startDate;
@property(retain) HKQuantity * sumQuantity;
@property(retain) NSDictionary * sumQuantityBySource;

+ (void)_validateOptions:(unsigned int)arg1 forDataType:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initAsCopyOf:(id)arg1;
- (id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_setEndDate:(id)arg1;
- (void)_setSources:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (id)averageQuantity;
- (id)averageQuantityBySource;
- (id)averageQuantityForSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataCount;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)maximumQuantity;
- (id)maximumQuantityBySource;
- (id)maximumQuantityForSource:(id)arg1;
- (id)minimumQuantity;
- (id)minimumQuantityBySource;
- (id)minimumQuantityForSource:(id)arg1;
- (id)quantityType;
- (void)setAverageQuantity:(id)arg1;
- (void)setAverageQuantityBySource:(id)arg1;
- (void)setDataCount:(unsigned int)arg1;
- (void)setMaximumQuantity:(id)arg1;
- (void)setMaximumQuantityBySource:(id)arg1;
- (void)setMinimumQuantity:(id)arg1;
- (void)setMinimumQuantityBySource:(id)arg1;
- (void)setSumQuantity:(id)arg1;
- (void)setSumQuantityBySource:(id)arg1;
- (id)sources;
- (id)startDate;
- (id)sumQuantity;
- (id)sumQuantityBySource;
- (id)sumQuantityForSource:(id)arg1;

@end
